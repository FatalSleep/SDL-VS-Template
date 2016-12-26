SDL Project/Solution Base
==
This is a project/solution that references SDL relative to it's own directory paths. You can use the project "as is," or use the below steps to setup your own project with the same settings and properties.

The VS template doesn't copy the SDL binaries for you, so you'll need to get the SDL binaries from the official SDL website. Then you'll need to copy the binaries to your project directory at: 'C:\...\ProjectName\Dependencies\SDL\'

Make sure the LIB and INCLUDE folders are directly in '.\Dependencies\SDL\' not in the '.\SDL-x-x\' folder. Make sure to also copy the binaries into your project directory, not the solution directory if you have one for your VS project.

NOTE:
-------
If you'd like to setup SDL without using the pre-built template then follow the below instructions.

CREATING A NEW PROJECT:
------
1. Create a new project and give it a name.
2. In your new project create your "Main.cpp" file.
  (This lets us set the project properties for our application's "main" source code)
3. Open the "Project Properties" window.

  NOTE: Here we can go one of two routes:
    
    - A) Add our SDL dependencies to our Solution directory.
    - B) Add our SDL dependencies to our Project directory.

5. Set the "Configuration" to "All Configurations" and set the "Platform" to "All Platforms."

6. Under "VC++ Directories" and "Include Directories" add a new file path:

7. Under "C++" and "General" add a new file path:
  
  - `$(ProjectDir)Dependencies\SDL\include;`
  
8. Set the "Platform" to "Win32."
9. Under "VC++ Directories" and "Library Directories" add a new file path:

  - `$(ProjectDir)Dependencies\SDL\lib\x86;`

10. Set the "Platform" to "x64."
11. Under "VC++ Directories" and "Library Directories" add a new file path:

  - `$(ProjectDir)Dependencies\SDL\lib\x64;`

12. Go into "Linker" and into "Input" and add the following LIB files to the "Additional Dependencies."

  - 'SDL2.lib'
  - 'SDL2main.lib'

13. Under "Build Events" and "Pre-Link Event" add the following command line code:
 
  - copy "$(ProjectDir)Dependencies\SDL\lib\x86\SDL2.dll" "$(TargetDir)\SDL2.dll"
  
14. Finally copy your SDL LIB/INCLUDES to:
 
  - $(ProjectDir)Dependencies\SDL\
  
NOTE: "$(ProjectDir)" is an environment variable for the project properties to refer direcctly to your project's folder path or directory.
