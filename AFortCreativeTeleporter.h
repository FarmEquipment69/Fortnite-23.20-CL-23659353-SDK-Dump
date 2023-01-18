// Class /Script/FortniteGame.FortCreativeTeleporter
// Size: 0xf10
class AFortCreativeTeleporter : public AFortCreativeDeviceProp
{
	class UClass* TeleporterAbility; // 0xef8 (0x8)
	enum EFortCreativeTeleporterGroup KnobTeleporterGroup; // 0xf00 (0x1)
	enum EFortCreativeTeleporterGroup KnobTargetTeleporterGroup; // 0xf01 (0x1)
	unsigned char unreflected_f02[0x6]; // 0xf02 (0x6) 
	class UFortGameplayReceiverMessageComponent* TeleportToWhenReceived; // 0xf08 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeTeleporter.IsTeleporterBlocked (Underlying native function: IsTeleporterBlocked 0x87d1908)
	bool IsTeleporterBlocked(class AActor*& ActorToTeleport, struct FRotator& InPawnTeleportedRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTeleporter.IsPortalDebuggingEnabled (Underlying native function: IsPortalDebuggingEnabled 0x87d17f0)
	bool IsPortalDebuggingEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeTeleporter.IsLocationBlocked (Underlying native function: IsLocationBlocked 0x87d1688)
	bool IsLocationBlocked(class AActor*& ActorToTeleport, struct FVector& LocationToTeleport, struct FRotator& InPawnTeleportedRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

