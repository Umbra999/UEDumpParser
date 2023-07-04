# UEDumpParser
Convert C++ UE Dumps to C# Dumps 

This Tool is a simple helper to convert the output from Unreal Dumper to C#, this way you have a easy way of managing the Offsets in your Externals without updating them by Hand

Known Issues:
- Since its converting raw Dump, some names might be doubled in some Games, for now you can just rename them in your Offset class by Hand it should not be that much
- Not all types are supported yet, stuff MIGHT be missing

Future Plans:
- SDK generator, this way you dont need to mess with offsets ever again and can work with full classes
- Method calling, right now it only works on props/fields/classes

Requirements: NET 7.0 https://dotnet.microsoft.com/en-us/download/dotnet/7.0

Usage:
1. Download or Compile the UEParser
2. Create a folder called "Input" next to it
3. Put all .h classes from UEDumper into the Input folder
4. Run the Parser
5. A Folder called Output should be created with 3 classes. Enums, Classes and Structs
6. Put the 3 Classes inside your Project
7. Now you can use it something like this: ![image](https://github.com/Umbra999/UEDumpParser/assets/69671761/d6835a02-4ef2-4bd5-a142-6247dcd8a14a)
 ![image](https://github.com/Umbra999/UEDumpParser/assets/69671761/a9512b46-5e06-4acd-8376-3dfa3b7f9b1b)

