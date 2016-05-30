# -*- coding: utf-8 -*-
"""
    pygments.lexers._mapping
    ~~~~~~~~~~~~~~~~~~~~~~~~

    Lexer mapping defintions. This file is generated by itself. Everytime
    you change something on a builtin lexer defintion, run this script from
    the lexers folder to update it.

    Do not alter the LEXERS dictionary by hand.

    :copyright: Copyright 2006-2013 by the Pygments team, see AUTHORS.
    :license: BSD, see LICENSE for details.
"""

LEXERS = {
    'Python3Lexer': ('pygments.lexers.agile', 'Python 3', ('python3', 'py3'), (), ('text/x-python3', 'application/x-python3')),
    'Python3TracebackLexer': ('pygments.lexers.agile', 'Python 3.0 Traceback', ('py3tb',), ('*.py3tb',), ('text/x-python3-traceback',)),
    'PythonConsoleLexer': ('pygments.lexers.agile', 'Python console session', ('pycon',), (), ('text/x-python-doctest',)),
    'PythonLexer': ('pygments.lexers.agile', 'Python', ('python', 'py', 'sage'), ('*.py', '*.pyw', '*.sc', 'SConstruct', 'SConscript', '*.tac', '*.sage'), ('text/x-python', 'application/x-python')),
    'PythonTracebackLexer': ('pygments.lexers.agile', 'Python Traceback', ('pytb',), ('*.pytb',), ('text/x-python-traceback',)),
    'RawTokenLexer': ('pygments.lexers.special', 'Raw token data', ('raw',), (), ('application/x-pygments-tokens',)),
    'TextLexer': ('pygments.lexers.special', 'Text only', ('text',), ('*.txt',), ('text/plain',)),
}

if __name__ == '__main__':
    import sys
    import os

    # lookup lexers
    found_lexers = []
    sys.path.insert(0, os.path.join(os.path.dirname(__file__), '..', '..'))
    for filename in os.listdir('.'):
        if filename.endswith('.py') and not filename.startswith('_'):
            module_name = 'pygments.lexers.%s' % filename[:-3]
            print module_name
            module = __import__(module_name, None, None, [''])
            for lexer_name in module.__all__:
                lexer = getattr(module, lexer_name)
                found_lexers.append(
                    '%r: %r' % (lexer_name,
                                (module_name,
                                 lexer.name,
                                 tuple(lexer.aliases),
                                 tuple(lexer.filenames),
                                 tuple(lexer.mimetypes))))
    # sort them, that should make the diff files for svn smaller
    found_lexers.sort()

    # extract useful sourcecode from this file
    f = open(__file__)
    try:
        content = f.read()
    finally:
        f.close()
    header = content[:content.find('LEXERS = {')]
    footer = content[content.find("if __name__ == '__main__':"):]

    # write new file
    f = open(__file__, 'wb')
    f.write(header)
    f.write('LEXERS = {\n    %s,\n}\n\n' % ',\n    '.join(found_lexers))
    f.write(footer)
    f.close()
