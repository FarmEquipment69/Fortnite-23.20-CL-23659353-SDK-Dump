// Class /Script/Landscape.LandscapeSettings
// Size: 0x98
class ULandscapeSettings : public UDeveloperSettings
{
	int MaxNumberOfLayers; // 0x30 (0x4)
	enum ELandscapeDirtyingMode LandscapeDirtyingMode; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	int SideResolutionLimit; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TWeakObjectPtr<class UMaterialInterface> DefaultLandscapeMaterial; // 0x40 (0x28)
	struct TWeakObjectPtr<class ULandscapeLayerInfoObject> DefaultLayerInfoObject; // 0x68 (0x28)
	bool bRestrictiveMode; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)
};

