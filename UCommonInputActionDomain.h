// Class /Script/CommonInput.CommonInputActionDomain
// Size: 0x40
class UCommonInputActionDomain : public UDataAsset
{
	enum ECommonInputEventFlowBehavior Behavior; // 0x30 (0x4)
	enum ECommonInputEventFlowBehavior InnerBehavior; // 0x34 (0x4)
	bool bUseActionDomainDesiredInputConfig; // 0x38 (0x1)
	enum ECommonInputMode InputMode; // 0x39 (0x1)
	enum EMouseCaptureMode MouseCaptureMode; // 0x3a (0x1)
	unsigned char padding_3b[0x5]; // 0x3b (0x5)
};

