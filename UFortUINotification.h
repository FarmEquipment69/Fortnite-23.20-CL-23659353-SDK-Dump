// Class /Script/FortniteGame.FortUINotification
// Size: 0x108
class UFortUINotification : public UObject
{
	struct FMulticastInlineDelegate OnNotificationCleared; // 0x28 (0x10)
	struct FText Title; // 0x38 (0x18)
	struct FText Description; // 0x50 (0x18)
	enum EFortNotificationType NotificationType; // 0x68 (0x1)
	unsigned char unreflected_69[0x7]; // 0x69 (0x7) 
	struct TWeakObjectPtr<class UObject> DisplayAsset; // 0x70 (0x28)
	bool bHasAction; // 0x98 (0x1)
	bool bIsLongNotification; // 0x99 (0x1)
	enum EFortNotificationPriority Priority; // 0x9a (0x1)
	unsigned char unreflected_9b[0x5]; // 0x9b (0x5) 
	struct FUniqueNetIdRepl IdToRepresent; // 0xa0 (0x30)
	float DisplayTimeOverride; // 0xd0 (0x4)
	unsigned char padding_d4[0x34]; // 0xd4 (0x34)

	/* Functions */

	// Function /Script/FortniteGame.FortUINotification.TakeAction (Underlying native function: TakeAction 0x14f9024)
	void TakeAction(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.ShouldShowNotification (Underlying native function: ShouldShowNotification 0x8f9b8a4)
	bool ShouldShowNotification(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.SetTitle (Underlying native function: SetTitle 0x8f9b650)
	void SetTitle(struct FText& InTitle); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetPriority (Underlying native function: SetPriority 0x8f9b5c0)
	void SetPriority(enum EFortNotificationPriority& InPriority); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetNotificationType (Underlying native function: SetNotificationType 0x8f9b534)
	void SetNotificationType(enum EFortNotificationType& InNotificationType); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetIsLongNotification (Underlying native function: SetIsLongNotification 0x8f9a724)
	void SetIsLongNotification(bool& bInIsLongNotification); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetIdToRepresent (Underlying native function: SetIdToRepresent 0x8f9a654)
	void SetIdToRepresent(struct FUniqueNetIdRepl& InIdToRepresent); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetHasAction (Underlying native function: SetHasAction 0x8f9a5c0)
	void SetHasAction(bool& bInHasAction); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetDisplayTimeOverride (Underlying native function: SetDisplayTimeOverride 0x8f9a524)
	void SetDisplayTimeOverride(float& InDisplayTimeOverride); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetDisplayAsset (Underlying native function: SetDisplayAsset 0x8f9a468)
	void SetDisplayAsset(struct TWeakObjectPtr<class UObject>& InDisplayAsset); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.SetDescription (Underlying native function: SetDescription 0x8f9a3ac)
	void SetDescription(struct FText& InDescription); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortUINotification.NotificationShown (Underlying native function: NotificationShown 0x735d960)
	void NotificationShown(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortUINotification.IsLongNotification (Underlying native function: IsLongNotification 0x8f9a148)
	bool IsLongNotification(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.HasAction (Underlying native function: HasAction 0x8f9a130)
	bool HasAction(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetTitle (Underlying native function: GetTitle 0x731dcf4)
	struct FText GetTitle(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetPriority (Underlying native function: GetPriority 0x8f99abc)
	enum EFortNotificationPriority GetPriority(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetNotificationType (Underlying native function: GetNotificationType 0x8f998ec)
	enum EFortNotificationType GetNotificationType(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetIdToRepresent (Underlying native function: GetIdToRepresent 0x8f998d0)
	struct FUniqueNetIdRepl GetIdToRepresent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetDisplayTimeOverride (Underlying native function: GetDisplayTimeOverride 0x712055c)
	float GetDisplayTimeOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetDisplayAsset (Underlying native function: GetDisplayAsset 0x8f99820)
	struct TWeakObjectPtr<class UObject> GetDisplayAsset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.GetDescription (Underlying native function: GetDescription 0x8f9977c)
	struct FText GetDescription(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortUINotification.ClearNotification (Underlying native function: ClearNotification 0x145ca48)
	void ClearNotification(); // (0x00000002 | BlueprintCosmetic | Native | Event | Public | BlueprintCallable | BlueprintEvent)
};

