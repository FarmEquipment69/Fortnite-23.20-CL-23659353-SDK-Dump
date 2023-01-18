// Class /Script/LiveLink.LiveLinkSettings
// Size: 0xc0
class ULiveLinkSettings : public UObject
{
	struct TArray<struct FLiveLinkRoleProjectSetting> DefaultRoleSettings; // 0x28 (0x10)
	class UClass* FrameInterpolationProcessor; // 0x38 (0x8)
	struct TWeakObjectPtr<class ULiveLinkPreset> DefaultLiveLinkPreset; // 0x40 (0x28)
	float ClockOffsetCorrectionStep; // 0x68 (0x4)
	enum ELiveLinkSourceMode DefaultMessageBusSourceMode; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	double MessageBusPingRequestFrequency; // 0x70 (0x8)
	double MessageBusHeartbeatFrequency; // 0x78 (0x8)
	double MessageBusHeartbeatTimeout; // 0x80 (0x8)
	double MessageBusTimeBeforeRemovingInactiveSource; // 0x88 (0x8)
	double TimeWithoutFrameToBeConsiderAsInvalid; // 0x90 (0x8)
	struct FLinearColor ValidColor; // 0x98 (0x10)
	struct FLinearColor InvalidColor; // 0xa8 (0x10)
	unsigned char TextSizeSource; // 0xb8 (0x1)
	unsigned char TextSizeSubject; // 0xb9 (0x1)
	unsigned char padding_ba[0x6]; // 0xba (0x6)
};

