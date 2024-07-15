Command                        Description                                      Example
-----------------------------------------------------------------------------------------------
cp source destination          Copy source file to destination.                 cp file.txt /path/to/destination/
cp -r source destination       Copy directories recursively.                    cp -r /path/to/source/ /path/to/destination/
cp -i source destination       Prompt before overwriting an existing file.      cp -i file.txt /path/to/destination/
cp -f source destination       Force copy, overwrite without prompting.         cp -f file.txt /path/to/destination/
cp -u source destination       Copy only if the source is newer than destination. cp -u file.txt /path/to/destination/
cp -v source destination       Verbose mode, show files being copied.           cp -v file.txt /path/to/destination/
