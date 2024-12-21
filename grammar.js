

module.exports =  grammar({
		name: "firebase",
		rules: {
				source_file: $ => repeat($._definition),
				_definition: $ => seq($.rules_statement,$.service_scope),
				rules_statement: $ => seq('rules_version', '=', $._string, ';'),
				service_scope: $ => seq('service', $.identifier, '{' ,optional(repeat($.match_definition)),'}'),
				match_definition: $ => prec.left(1,
				 	seq('match', $.db_path,'{', optional(repeat($.match_expression) ), optional(repeat($.function_definition)),'}')),
				match_expression: $ =>  seq('match', $.path, $.match_block) ,
				match_block: $ => seq('{', optional(
					choice(
						repeat(
							choice($.match_expression, $.allow_statement, $.deny_statement)
						),
						optional(repeat($.function_definition))
					),
				) ,'}'),
				identifier: $ => /[A-Za-z0-9_\.]+/ ,
				allow_statement: $ => seq('allow', choice($.compound_type, $._type),':', 'if', $.expression, ';'),
				deny_statement: $ => seq('deny', $._type,':', 'if', $.expression, ';'),
				bool_expression: $ => choice($.unary_expression, $.binary_expression, 'true', 'false'),
				function_definition: $ => seq('function',$.identifier, '()', '{', $.return_statement, '}'),
				_type: $ => choice('read', 'write', 'update', 'delete', 'create'),
				compound_type: $ => seq($._type, ',' , $._type), 
				return_statement: $ => seq('return', $.expression, ';'),
				unary_expression: $ => seq('!', $.expression),
				expression: $ => choice( $.binary_expression, $.unary_expression, $.function_call ),
				db_path: $ => /\/\S+\/\{\S+\}\/\S+/,
				function_call: $ => seq($.identifier, '()'),
				path: $ => /\/\S+\/\{\S+\}/,
				_string: $ => choice(seq('"', /[a-zA-Z0-9\_\-\$]/ ,'"'),seq("'", /[a-zA-Z0-9\_\-\$]/ ,"'")),
				binary_expression: $ => prec.left(2, seq( $.expression, choice('!=', '==', '>', '<'), $.expression )),
				comment: $ => token(choice( seq('//', /(\\+(.|\r?\n)|[^\\\n])*/ ), seq('/*', /[^*]*\*+([^/*][^*]*\*+)*/ , '/') )),
	},
	extras: $ =>
		[ /\s|\\\r?\n/,  $.comment],
	keywords: $ => [$.type, 'allow', 'if', $._type],
})


