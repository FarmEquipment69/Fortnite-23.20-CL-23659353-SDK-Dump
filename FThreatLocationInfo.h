// ScriptStruct /Script/FortniteAI.ThreatLocationInfo
// Size: 0x88
struct FThreatLocationInfo : FFastArraySerializerItem
{
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FVector CloudLocation; // 0x10 (0x18)
	struct FBox ThreatVolume; // 0x28 (0x38)
	class AFortThreatVisualsManager* ThreatVisualsManager; // 0x60 (0x8)
	struct TWeakObjectPtr<class AThreatCloud> CloudActor; // 0x68 (0x8)
	unsigned char unreflected_70[0x1]; // 0x70 (0x1) 
	bool bThreatActivated; // 0x71 (0x1)
	enum EFortThreatDeactivationType DeactivationType; // 0x72 (0x1)
	unsigned char padding_73[0x15]; // 0x73 (0x15)
};

