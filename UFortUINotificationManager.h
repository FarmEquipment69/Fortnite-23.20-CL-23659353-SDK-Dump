// Class /Script/FortniteUI.FortUINotificationManager
// Size: 0x98
class UFortUINotificationManager : public UObject
{
	struct TArray<class UFortUINotificationQueue*> UINotificationQueues; // 0x28 (0x10)
	class UFortLocalPlayer* LocalPlayer; // 0x38 (0x8)
	unsigned char padding_40[0x58]; // 0x40 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.FortUINotificationManager.HandlePurchaseBattlePassOfferComplete (Underlying native function: HandlePurchaseBattlePassOfferComplete 0xa724dc8)
	void HandlePurchaseBattlePassOfferComplete(bool& bSuccess); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUINotificationManager.HandleProfileUpdated (Underlying native function: HandleProfileUpdated 0x2861e40)
	void HandleProfileUpdated(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortUINotificationManager.HandleBattlePassPageUnlockToast (Underlying native function: HandleBattlePassPageUnlockToast 0x1c2c658)
	void HandleBattlePassPageUnlockToast(); // (Final | Native | Private)
};

