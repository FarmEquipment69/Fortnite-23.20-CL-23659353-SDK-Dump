// Class /Script/FortniteGame.BuildingGameplayActorCloneMachine
// Size: 0xaa0
class ABuildingGameplayActorCloneMachine : public ABuildingGameplayActor
{
	class AFortPlayerStart* CloneLocation; // 0x9d8 (0x8)
	unsigned char bRespawnCompleteAndSelfDestructing; // 0x9e0 (0x1)
	unsigned char unreflected_9e1[0x7]; // 0x9e1 (0x7) 
	struct FScalableFloat DelayBeforeActivation; // 0x9e8 (0x28)
	struct FScalableFloat DelayBeforeRespawn; // 0xa10 (0x28)
	struct FScalableFloat DelayBeforeSelfDestruct; // 0xa38 (0x28)
	struct FScalableFloat DelayBeforeSelfDestructWithStorm; // 0xa60 (0x28)
	class USoundCue* OnDamagedNotifyPlayerSound; // 0xa88 (0x8)
	class USoundCue* OnDestroyedNotifyPlayerSound; // 0xa90 (0x8)
	float ActivationServerEndTime; // 0xa98 (0x4)
	float RespawnServerEndTime; // 0xa9c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.BuildingGameplayActorCloneMachine.OnRep_RespawnServerEndTime (Underlying native function: OnRep_RespawnServerEndTime 0x85e00d8)
	void OnRepRespawnServerEndTime(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingGameplayActorCloneMachine.OnRep_ActivationServerEndTime (Underlying native function: OnRep_ActivationServerEndTime 0x85dfd8c)
	void OnRepActivationServerEndTime(); // (Final | Native | Private)

	// Function /Script/FortniteGame.BuildingGameplayActorCloneMachine.OnCloneMachineSpawnsPlayer (Underlying native function: OnCloneMachineSpawnsPlayer 0x85bc5ec)
	void OnCloneMachineSpawnsPlayer(class AFortPlayerPawn*& PlayerPawn); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorCloneMachine.OnCloneMachineRespawningBegins (Underlying native function: OnCloneMachineRespawningBegins 0x85df93c)
	void OnCloneMachineRespawningBegins(); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingGameplayActorCloneMachine.OnCloneMachineActivationBegins (Underlying native function: OnCloneMachineActivationBegins 0x8288df4)
	void OnCloneMachineActivationBegins(); // (Native | Event | Protected | BlueprintEvent)
};

