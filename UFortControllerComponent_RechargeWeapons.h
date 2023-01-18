// Class /Script/FortniteGame.FortControllerComponent_RechargeWeapons
// Size: 0x148
class UFortControllerComponent_RechargeWeapons : public UFortControllerComponent
{
	struct TMap<struct FGuid, struct FCachedRechargeAmmoData> WeaponToRechargeDataMap; // 0xa0 (0x50)
	struct TMap<struct FGuid, float> PendingGuidToServerStartTimeMap; // 0xf0 (0x50)
	bool bPreventRecharging; // 0x140 (0x1)
	unsigned char padding_141[0x7]; // 0x141 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_RechargeWeapons.ServerSetPreventRecharging (Underlying native function: ServerSetPreventRecharging 0x8524c44)
	void ServerSetPreventRecharging(bool& bInPreventRecharging); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_RechargeWeapons.ClientItemStartedRecharging (Underlying native function: ClientItemStartedRecharging 0x86e8818)
	void ClientItemStartedRecharging(struct FGuid& ItemGuid, float& InServerStartTime); // (Net | NetReliable | Native | Event | Protected | HasDefaults | NetClient)
};

