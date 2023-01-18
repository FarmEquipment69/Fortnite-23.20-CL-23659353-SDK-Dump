// Class /Script/LiveLinkInterface.LiveLinkSourceSettings
// Size: 0xa8
class ULiveLinkSourceSettings : public UObject
{
	enum ELiveLinkSourceMode Mode; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30 (0x60)
	struct FString ConnectionString; // 0x90 (0x10)
	class UClass* Factory; // 0xa0 (0x8)
};

