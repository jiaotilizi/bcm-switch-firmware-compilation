$(eval @ := /home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/build/unix-linux-64/src/soc/portmod/pms/pm4x10Q.o) $(eval < := pm4x10Q.c) $(eval * := pm4x10Q)
/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/build/unix-linux-64/src/soc/portmod/pms/pm4x10Q.o: /home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/build/unix-linux-64/src/soc/portmod/pms/pm4x10Q.force
$(if $(call sne,$(sort $(CC) $(DEPS_OPT) $(CFLAGS) $(EXTRA_CFLAGS) -o $@ -c $(realpath $<)),-DBCM_ALL_CHIPS -DBCM_ESW_SUPPORT -DBCM_PLATFORM_STRING=\"unix-linux-64\" -DBCM_RPC_SUPPORT -DBCM_SHADOW_SUPPORT -DBROADCOM_DEBUG -DCINT_CONFIG_INCLUDE_CINT_LOAD=0 -DCINT_CONFIG_INCLUDE_PARSER=1 -DCINT_CONFIG_INCLUDE_SDK_SAL=1 -DDISCOVER_APP_DATA_BOARDID -DINCLUDE_BCMX -DINCLUDE_BCMX_DIAG -DINCLUDE_BFD -DINCLUDE_CES -DINCLUDE_CHASSIS -DINCLUDE_CINT -DINCLUDE_CUSTOMER -DINCLUDE_EDITLINE -DINCLUDE_I2C -DINCLUDE_L3 -DINCLUDE_LIB_CINT -DINCLUDE_LIB_CPUDB -DINCLUDE_LIB_CPUTRANS -DINCLUDE_LIB_DISCOVER -DINCLUDE_LIB_STKTASK -DINCLUDE_LONGREACH -DINCLUDE_MEM_SCAN -DINCLUDE_PHY_522X -DINCLUDE_PHY_52681E -DINCLUDE_PHY_5421S -DINCLUDE_PHY_542XX -DINCLUDE_PHY_54380 -DINCLUDE_PHY_54616 -DINCLUDE_PHY_5464 -DINCLUDE_PHY_54640 -DINCLUDE_PHY_54640E -DINCLUDE_PHY_54680 -DINCLUDE_PHY_54680E -DINCLUDE_PHY_54682 -DINCLUDE_PHY_54684 -DINCLUDE_PHY_5482 -DINCLUDE_PHY_54880 -DINCLUDE_PHY_54880E -DINCLUDE_PHY_54XX -DINCLUDE_PHY_8040 -DINCLUDE_PHY_8072 -DINCLUDE_PHY_82109 -DINCLUDE_PHY_82328 -DINCLUDE_PHY_82381 -DINCLUDE_PHY_82764 -DINCLUDE_PHY_82780 -DINCLUDE_PHY_82864 -DINCLUDE_PHY_84328 -DINCLUDE_PHY_84334 -DINCLUDE_PHY_84728 -DINCLUDE_PHY_84740 -DINCLUDE_PHY_84749 -DINCLUDE_PHY_84756 -DINCLUDE_PHY_84793 -DINCLUDE_PHY_8481 -DINCLUDE_PHY_8703 -DINCLUDE_PHY_8705 -DINCLUDE_PHY_8706 -DINCLUDE_PHY_8729 -DINCLUDE_PHY_8750 -DINCLUDE_PHY_8806X -DINCLUDE_PHY_EGPHY28 -DINCLUDE_PHY_SERDES -DINCLUDE_PHY_SIMUL -DINCLUDE_PSTATS -DINCLUDE_PTP -DINCLUDE_RCPU -DINCLUDE_TCB -DINCLUDE_TEST -DLE_HOST=1 -DPHYMOD_DIAG -DPHYMOD_INCLUDE_CUSTOM_CONFIG -DPHYMOD_SUPPORT -DPHYMOD_TIER1_SUPPORT -DPLISIM -DPORTMOD_DIAG -DPORTMOD_SUPPORT -DSW_AUTONEG_SUPPORT -DUNIX -DVENDOR_BROADCOM -DVENDOR_CALHOUN -DVENDOR_GAMMA -D_REENTRANT -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7 -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/include -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/libs/phymod/include -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/src/soc/phy/chip/koi/merlin_koi_src -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/src/soc/phy/chip/orca/eagle_orca_src -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/src/soc/phy/phy8806x/include -I/home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/systems -MD -MF -Wall -Werror -c -g -m32 -o /home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/build/unix-linux-64/src/soc/portmod/pms/pm4x10Q.d /home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/build/unix-linux-64/src/soc/portmod/pms/pm4x10Q.o /home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/src/soc/portmod/pms/pm4x10Q.c /usr/bin/gcc),$(shell touch /home/dev/work/switch_engine/sdk-xgs-robo-6.5.7/build/unix-linux-64/src/soc/portmod/pms/pm4x10Q.force))
