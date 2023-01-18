// ScriptStruct /Script/FortniteGame.FortActiveSubscription
// Size: 0x60
struct FFortActiveSubscription
{
	struct FDateTime* NextRewardDate; // 0x0 (0x8)
	struct FDateTime* NextRenewalRewardDate; // 0x8 (0x8)
	struct FDateTime* LastRenewalRewardDate; // 0x10 (0x8)
	bool RenewedAsOverlapped; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FDateTime* LastStatusRefresh; // 0x20 (0x8)
	struct FDateTime* MustRefreshAuthBy; // 0x28 (0x8)
	struct FDateTime* LastAuthRefresh; // 0x30 (0x8)
	struct FDateTime* SubscriptionEndDate; // 0x38 (0x8)
	bool IsRetryingRenewal; // 0x40 (0x1)
	enum EAppStore AppStore; // 0x41 (0x1)
	bool WillAutoRenew; // 0x42 (0x1)
	enum EAutoRenewState AutoRenewState; // 0x43 (0x1)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FString UniqueSubscriptionId; // 0x48 (0x10)
	unsigned char padding_58[0x8]; // 0x58 (0x8)
};

