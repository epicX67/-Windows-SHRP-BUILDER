type *.bin > c_ex_variables.xml
type *.pepe > updater-script
type *.goon > shrp_vital
rmdir /q /s shrp\ramdisk\twres
xcopy resources shrp\ramdisk /E
copy c_ex_variables.xml shrp\ramdisk\twres
copy shrp_vital shrp\ramdisk
copy updater-script zip\META-INF\com\google\android
