#option(ALWAYS_REBUILD_NIFLIB "Always regenerate niflib from nif.xml" 0)
#set(REGENERATE ALWAYS_REBUILD_NIFLIB)

file(TIMESTAMP nifxml/nif.xml NIF_XML_MOD_DATE)
message(STATUS "LAST XML MODIFICATION: " ${NIF_XML_MOD_DATE})

if ( EXISTS LAST_GEN_MOD_DATE )
	file(READ LAST_GEN_MOD_DATE LAST_GEN_MOD_DATE)
	message (STATUS "Saved Date: " ${LAST_GEN_MOD_DATE}) 
	if ( NOT NIF_XML_MOD_DATE STREQUAL LAST_GEN_MOD_DATE)
		set(REGENERATE 1)
	endif()
else()
	set(REGENERATE 1)
endif()
	
if ( REGENERATE EQUAL 1)
	message(STATUS "Regenerating Niflib...")
	file(WRITE LAST_GEN_MOD_DATE ${NIF_XML_MOD_DATE})
	set(Python_ADDITIONAL_VERSIONS 2.7)
	find_package(PythonInterp)
	if (NOT PYTHONINTERP_FOUND)
		message(FATAL_ERROR "Unable to find Python interpreter version 2. Python is required to regenerate Niflib. Exiting")
	endif()
	EXECUTE_PROCESS(COMMAND ${PYTHON_EXECUTABLE} gen_niflib.py -b -a -p .. )	
else()
	message(STATUS "Niflib is up to date.")
endif()



