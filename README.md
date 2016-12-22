SDL Project/Solution Base
==
This is a project/solution that references SDL relative to it's own directory paths. You can use the project "as is," or use the below steps to setup your own project with the same settings and properties.

NOTE:
-------
VS templates don't copy over project properties or folders you've added manually to your project folder. So templates in VS are a bust.

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
  
  - `$(ProjectDir)\Dependencies\SDL\include;`
  
8. Set the "Platform" to "Win32."
9. Under "VC++ Directories" and "Library Directories" add a new file path:

  - `$(ProjectDir)\Dependencies\SDL\lib\x86;`

10. Set the "Platform" to "x64."
11. Under "VC++ Directories" and "Library Directories" add a new file path:

  - `$(ProjectDir)\Dependencies\SDL\lib\x64;`
  
12. Under "Build Events" and "Pre-Link Event" add the following command line code:
 
  - copy "$(ProjectDir)Dependencies\SDL\lib\x86\SDL2.dll" "$(TargetDir)\SDL2.dll"
  
13. Finally copy your SDL LIB/INCLUDES to:
 
  - $(ProjectDir)Dependencies\SDL\
  
NOTE: "$(ProjectDir)" is an environment variable for the project properties to refer direcctly to your project's folder path or directory.
