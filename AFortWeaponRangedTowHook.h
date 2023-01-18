// Class /Script/FortniteGame.FortWeaponRangedTowHook
// Size: 0x1668
class AFortWeaponRangedTowHook : public AFortWeaponRanged
{
	class AFortPhysicsTowHook* TowHook; // 0x1560 (0x8)
	struct FTowhookParams TowhookParams; // 0x1568 (0xd0)
	unsigned char padding_1638[0x30]; // 0x1638 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.SetupTowhookAttachmentsOnServer (Underlying native function: SetupTowhookAttachmentsOnServer 0x9059db8)
	void SetupTowhookAttachmentsOnServer(class UPrimitiveComponent*& FirstAttachedPrimitive, class UPrimitiveComponent*& SecondAttachedPrimitive); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.OnRep_TowHook (Underlying native function: OnRep_TowHook 0x90590d0)
	void OnRepTowHook(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.DetachActorsFromTowHook (Underlying native function: DetachActorsFromTowHook 0x9057c70)
	void DetachActorsFromTowHook(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.AttachToTowHook (Underlying native function: AttachToTowHook 0x9057470)
	void AttachToTowHook(class AActor*& ActorToAttach); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponRangedTowHook.ActorDetachedFromTowHook (Has no native function)
	void ActorDetachedFromTowHook(class AActor*& DetachedActor); // (Event | Public | BlueprintEvent)
};

