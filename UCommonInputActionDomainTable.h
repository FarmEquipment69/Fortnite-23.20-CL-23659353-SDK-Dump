// Class /Script/CommonInput.CommonInputActionDomainTable
// Size: 0x48
class UCommonInputActionDomainTable : public UDataAsset
{
	struct TArray<class UCommonInputActionDomain*> ActionDomains; // 0x30 (0x10)
	enum ECommonInputMode InputMode; // 0x40 (0x1)
	enum EMouseCaptureMode MouseCaptureMode; // 0x41 (0x1)
	unsigned char padding_42[0x6]; // 0x42 (0x6)
};

