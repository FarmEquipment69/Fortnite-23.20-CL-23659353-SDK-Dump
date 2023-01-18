// ScriptStruct /Script/FortniteUI.CrewPlatformAndCountriesNotificationModal
// Size: 0x150
struct FCrewPlatformAndCountriesNotificationModal
{
	struct FString NotificationId; // 0x0 (0x10)
	struct TArray<struct FCrewPlatformAndCountriesPair> ValidPlatformAndCountriesPairs; // 0x10 (0x10)
	struct FText Title; // 0x20 (0x18)
	struct FText DefaultBodyText; // 0x38 (0x18)
	struct FText BodyTextIfSubscriptionCanceled; // 0x50 (0x18)
	struct FText BodyTextIfNoBodyTable; // 0x68 (0x18)
	struct FText BodyTextIfNoBodyTableAndSubscriptionCanceled; // 0x80 (0x18)
	struct FDateTime* EffectiveDate; // 0x98 (0x8)
	struct TArray<struct FCrewPlatformTable> PlatformSpecificBodyTables; // 0xa0 (0x10)
	struct FText CheckboxText; // 0xb0 (0x18)
	struct FText DefaultConfirmButtonText; // 0xc8 (0x18)
	struct FText ConfirmButtonTextIfSubscriptionCanceled; // 0xe0 (0x18)
	struct FText CancelSubscriptionButtonText; // 0xf8 (0x18)
	struct FText MoreInfoText; // 0x110 (0x18)
	struct FText MoreInfoUrl; // 0x128 (0x18)
	struct FDateTime* NotificationStartDate; // 0x140 (0x8)
	struct FDateTime* NotificationEndDate; // 0x148 (0x8)
};

