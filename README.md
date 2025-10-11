<div>
<img src="https://img.shields.io/github/last-commit/nahuelmol/ves"/>
<img src="https://img.shields.io/github/languages/code-size/nahuelmol/ves"/>
<img src="https://img.shields.io/github/languages/top/nahuelmol/ves"/>
</div>

### Idea

This application will read geoelectrical data and process it for interpretation.

### Platform

Codeblocks is used to develop the GUI.
Being as this IDE has not an embedded resource editor, an alternative is used. Resource Hacker is an independent resource editor.

However there's another problem. Resource Hacker does not export .rc file for Mingw's windres. Then windres throws sintax errors.

Then a Python script has been written to solve this problem. As the GUI gets more complex the python script should be modified to support new sintax. 
By now, the scripts only replaces "{" and "}" with "BEGIN" and "END". It also tranforms "CONTROL" generic sentences into specific sentences like PUSHBUTTONS, COMBOBOX, etc.
