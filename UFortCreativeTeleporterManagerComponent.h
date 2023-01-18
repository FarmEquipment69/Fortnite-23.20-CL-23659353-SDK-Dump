// Class /Script/FortniteGame.FortCreativeTeleporterManagerComponent
// Size: 0xb0
class UFortCreativeTeleporterManagerComponent : public UActorComponent
{
	unsigned char unreflected_b0[0xb0]; 

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTeleporterManagerComponent.UnregisterTeleporterFromGroup (Underlying native function: UnregisterTeleporterFromGroup 0x88c1c88)
	void UnregisterTeleporterFromGroup(class AFortCreativeTeleporter*& TeleporterToUnregister, enum EFortCreativeTeleporterGroup& GroupToUnregisterOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTeleporterManagerComponent.RegisterTeleporterWithGroup (Underlying native function: RegisterTeleporterWithGroup 0x88c1744)
	void RegisterTeleporterWithGroup(class AFortCreativeTeleporter*& TeleporterToRegister, enum EFortCreativeTeleporterGroup& GroupToRegisterOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeTeleporterManagerComponent.GetTeleportersInGroup (Underlying native function: GetTeleportersInGroup 0x88c152c)
	struct TSet<class AFortCreativeTeleporter*> GetTeleportersInGroup(enum EFortCreativeTeleporterGroup& Group); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

