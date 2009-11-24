require "#{File.dirname(__FILE__)}/util.rb"

if(!defined?(CONFIG))
	set_const(:CONFIG, "debug")
end

module Defaults
def set_defaults
	default(:SOURCES, [])
	default(:EXTRA_CFLAGS, "")
	default(:EXTRA_CPPFLAGS, "")
	default(:EXTRA_LINKFLAGS, "")
	default(:EXTRA_INCLUDES, [])
	default(:IGNORED_FILES, [])
	default(:EXTRA_SOURCEFILES, [])
	default(:EXTRA_OBJECTS, [])
	default(:LOCAL_LIBS, [])
	default(:LOCAL_DLLS, [])
	default(:CUSTOM_LIBS, [])
	default(:LIBRARIES, [])
	default(:SPECIFIC_CFLAGS, {})
	default(:BUILDDIR_BASE, "build/")

	if(CONFIG == "debug") then
		@BUILDDIR = @BUILDDIR_BASE + "debug/"
		@CONFIG_POSTFIX = "D"
	elsif(CONFIG == "")
		@BUILDDIR = @BUILDDIR_BASE
		@CONFIG_POSTFIX = ""
	else
		error "wrong configuration: " + CONFIG
	end
	
	default(:COMMON_BASEDIR, File.expand_path(File.dirname(__FILE__) + "/.."))
	default(:COMMON_BUILDDIR, @COMMON_BASEDIR + "/" + @BUILDDIR)
	default(:TARGETDIR, @COMMON_BASEDIR)
end
end
