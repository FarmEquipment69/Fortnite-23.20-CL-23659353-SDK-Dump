// Class /Script/FortniteGame.FortPlayerStateOutpost
// Size: 0xf60
class AFortPlayerStateOutpost : public AFortPlayerStatePvE
{
	bool bHasPermissionToEditOutpost; // 0xf58 (0x1)
	unsigned char padding_f59[0x7]; // 0xf59 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerStateOutpost.SetHasPermissionToEditOutpost (Underlying native function: SetHasPermissionToEditOutpost 0x8f0a2d0)
	void SetHasPermissionToEditOutpost(class AFortPlayerStateOutpost*& InPlayer, bool& bHasPermission); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.ServerSetHasPermissionToEditOutpost (Underlying native function: ServerSetHasPermissionToEditOutpost 0x8f09fc8)
	void ServerSetHasPermissionToEditOutpost(class AFortPlayerStateOutpost*& InPlayer, bool& bHasPermission); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.OnRep_HasPermissionToEditOutpost (Underlying native function: OnRep_HasPermissionToEditOutpost 0x8f09d2c)
	void OnRepHasPermissionToEditOutpost(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.IsOutpostOwner (Underlying native function: IsOutpostOwner 0x8f09d10)
	bool IsOutpostOwner(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPlayerStateOutpost.HasPermissionToEditOutpost (Underlying native function: HasPermissionToEditOutpost 0x8f09cf0)
	bool HasPermissionToEditOutpost(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

