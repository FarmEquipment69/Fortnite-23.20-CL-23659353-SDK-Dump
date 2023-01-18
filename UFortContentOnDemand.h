// Class /Script/FortniteUI.FortContentOnDemand
// Size: 0x358
class UFortContentOnDemand : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x8]; // 0x2d0 (0x8) 
	float ReEnableSettingDelay; // 0x2d8 (0x4)
	unsigned char unreflected_2dc[0xc]; // 0x2dc (0xc) 
	bool bEnabled; // 0x2e8 (0x1)
	bool bSpinnerEnabled; // 0x2e9 (0x1)
	unsigned char unreflected_2ea[0x6]; // 0x2ea (0x6) 
	int64_t LastReminder; // 0x2f0 (0x8)
	struct FTimespan* TimespanToRemind; // 0x2f8 (0x8)
	bool bSendErrorReports; // 0x300 (0x1)
	bool bSendOutOfMemoryErrorReports; // 0x301 (0x1)
	unsigned char unreflected_302[0x6]; // 0x302 (0x6) 
	struct TArray<enum EFortGameFeature> GameFeaturesToListenForConfig; // 0x308 (0x10)
	struct TArray<enum EFortGameFeature> GameFeaturesToListenFor; // 0x318 (0x10)
	struct TArray<enum EFortGameFeature> OptionalGameFeaturesToListenForConfig; // 0x328 (0x10)
	struct TArray<enum EFortGameFeature> OptionalGameFeaturesToListenFor; // 0x338 (0x10)
	struct TArray<struct TWeakObjectPtr<class UAthenaCosmeticItemDefinition>> ActiveCosmeticDownloads; // 0x348 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortContentOnDemand.OnUpdatedState (Has no native function)
	void OnUpdatedState(int& NumActiveDownloads, int& NumErrors); // (Event | Protected | BlueprintEvent)
};

