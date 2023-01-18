// Class /Script/DLSS.DLSSOverrideSettings
// Size: 0x30
class UDLSSOverrideSettings : public UObject
{
	enum EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28 (0x1)
	enum EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x29 (0x1)
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2a (0x1)
	enum EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2b (0x1)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

