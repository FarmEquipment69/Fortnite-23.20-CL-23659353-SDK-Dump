// Class /Script/FortniteGame.FortHomeTeleporterInterface
// Size: 0x28
class IFortHomeTeleporterInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterUnboundServer (Has no native function)
	void OnHomeTeleporterUnboundServer(class AFortPlayerPawn*& PlayerPawn, class AActor*& NewHomeActor); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterUnbound (Has no native function)
	void OnHomeTeleporterUnbound(class AFortPlayerPawn*& PlayerPawn, class AActor*& NewHomeActor); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterBoundServer (Has no native function)
	void OnHomeTeleporterBoundServer(class AFortPlayerPawn*& PlayerPawn, class AActor*& OldHomeActor); // (BlueprintAuthorityOnly | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortHomeTeleporterInterface.OnHomeTeleporterBound (Has no native function)
	void OnHomeTeleporterBound(class AFortPlayerPawn*& PlayerPawn, class AActor*& OldHomeActor); // (BlueprintCosmetic | Event | Public | BlueprintEvent)
};

