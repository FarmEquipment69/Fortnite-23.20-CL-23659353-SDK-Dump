// ScriptStruct /Script/LiveLinkInterface.LiveLinkSubjectPreset
// Size: 0x38
struct FLiveLinkSubjectPreset
{
	struct FLiveLinkSubjectKey Key; // 0x0 (0x14)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	class UClass* Role; // 0x18 (0x8)
	class ULiveLinkSubjectSettings* Settings; // 0x20 (0x8)
	class ULiveLinkVirtualSubject* VirtualSubject; // 0x28 (0x8)
	bool bEnabled; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

