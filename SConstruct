import os

from xbuilder.xenv import xenv
xenv.Append(CPPPATH = ['#xglobal'])
build_output = xenv.Setup('xagent')

libs = SConscript(dirs = os.path.join(build_output, 'xcommon'), exports = ['xenv'])
libs = xenv.Flatten(libs)
libs += SConscript(dirs = os.path.join(build_output, 'xnetwork'), exports = ['xenv', 'libs'])
libs = xenv.Flatten(libs)
#libs += SConscript(dirs = os.path.join(build_output, 'xnet_messages'), exports = ['xenv', 'libs'])
#libs = xenv.Flatten(libs)
SConscript(dirs = os.path.join(build_output, 'xagent'), exports = ['xenv', 'libs'])
