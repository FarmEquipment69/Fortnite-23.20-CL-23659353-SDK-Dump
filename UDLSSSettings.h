// Class /Script/DLSS.DLSSSettings
// Size: 0x60
class UDLSSSettings : public UObject
{
	bool bEnableDLSSD3D12; // 0x28 (0x1)
	bool bEnableDLSSD3D11; // 0x29 (0x1)
	bool bEnableDLSSVulkan; // 0x2a (0x1)
	bool bEnableDLSSInEditorViewports; // 0x2b (0x1)
	bool bEnableDLSSInPlayInEditorViewports; // 0x2c (0x1)
	bool bShowDLSSSDebugOnScreenMessages; // 0x2d (0x1)
	unsigned char unreflected_2e[0x2]; // 0x2e (0x2) 
	struct FString GenericDLSSBinaryPath; // 0x30 (0x10)
	bool bGenericDLSSBinaryExists; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	uint32_t NVIDIANGXApplicationId; // 0x44 (0x4)
	struct FString CustomDLSSBinaryPath; // 0x48 (0x10)
	bool bCustomDLSSBinaryExists; // 0x58 (0x1)
	unsigned char padding_59[0x7]; // 0x59 (0x7)
};

