# Edex (Text Editor)
Edex is a GUI text editor written by me. it is written in C++ with raylib.
it doesnt use any other dependencies, though for ligatures it requires because raylib doesnt have font library like SDL.
I have planned ligatures beforehand yet now the project is abondoned for some reasons:
One of them is that it started as toy project and then the modules like `struct Buffer` or `struct Cursor` happened to collapse.
I could've rework on it but i learnt so many things from this project and i thought it's time to say goodbye to it and move on to the next one!

# Usage
Edex is minimalist text editor, therefore i didn't bother putting keyboard shortcuts to
some help menu. Here are all of them:

### Shortcuts
Ctrl+Q          ->  quit
Ctrl+T          ->  new-tab
Ctrl+S          ->  save-file
Ctrl+O          ->  open-file
Ctrl+Tab        ->  next-tab
Ctrl+Shift+Tab  ->  prev-tab

### Navigation
[Arrow Keys]      ->  move cursor
Home            ->  start of line
End             ->  end of line

### Buffer control
Ctrl+Backspace  ->  delete-word-back
Ctrl+Delete     ->  delete-word-forward

