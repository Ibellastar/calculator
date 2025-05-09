project('Calculator', 'c',
  version: '0.1',
  default_options: [
    'c_std=c99',
    'warning_level=3',
  ]
)

unity_subproject = subproject('unity')
unity_dependency = unity_subproject.get_variable('unity_dep')
unity_gen_runner = unity_subproject.get_variable('gen_test_runner')

inc = include_directories('../../src')

test_1 = executable('test_1',
  sources: [
    files([
      '../../src' / 'calculator.c',
      'test' / 'test_1.c',
    ]),
    unity_gen_runner.process('test' / 'test_1.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 1 - Addition', test_1)

test_2 = executable('test_2',
  sources: [
    files([
      '../../src' / 'calculator.c',
      'test' / 'test_2.c',
    ]),
    unity_gen_runner.process('test' / 'test_2.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Test 2 - Subtraction', test_2)

test1_3 = executable('test_multiplication',
  sources: [
    files([
      '../../src' / 'calculator.c',
      'test' / 'test_multiplication.c',
    ]),
    unity_gen_runner.process('test' / 'test_multiplication.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Multiplication', test1_3)

test1_4 = executable('test_division',
  sources: [
    files([
      '../../src' / 'calculator.c',
      'test' / 'test_division.c',
    ]),
    unity_gen_runner.process('test' / 'test_division.c')
  ],
  include_directories: [ inc ],
  dependencies: [ unity_dependency ],
)


test('Division', test1_4)