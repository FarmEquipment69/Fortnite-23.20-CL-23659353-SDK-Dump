// Class /Script/FortniteUI.FortColorPickerConfiguration
// Size: 0x38
class UFortColorPickerConfiguration : public UDataAsset
{
	bool bNoColorOptionAvailable; // 0x30 (0x1)
	enum EColorPickerType ColorPickerType; // 0x31 (0x1)
	bool bInitializeCustomColorFromSelectedSwatch; // 0x32 (0x1)
	enum EColorPickerColorRepresentation CustomColorRepresentation; // 0x33 (0x1)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

