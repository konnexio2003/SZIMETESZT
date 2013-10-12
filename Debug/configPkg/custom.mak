## THIS IS A GENERATED FILE -- DO NOT EDIT
.configuro: .libraries,em4f linker.cmd package/cfg/szime2.0_pem4f.oem4f

linker.cmd: package/cfg/szime2.0_pem4f.xdl
	$(SED) 's"^\"\(package/cfg/szime2.0_pem4fcfg.cmd\)\"$""\"/root/workspace_Szimetour/szime2.0tesztmereshez/Debug/configPkg/\1\""' package/cfg/szime2.0_pem4f.xdl > $@
