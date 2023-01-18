// Class /Script/FortniteAI.FortPawnComponent_AIBotPingCommand
// Size: 0x240
class UFortPawnComponent_AIBotPingCommand : public UFortPawnComponent_PingCommand
{
	class AFortAthenaAIBotController* CachedOwnerController; // 0x238 (0x8)

	/* Functions */

	// Function /Script/FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerRemoved (Underlying native function: OnServerMarkerRemoved 0xa35c07c)
	void OnServerMarkerRemoved(struct FMarkerID*& MarkerID); // (Final | Native | Public)

	// Function /Script/FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerAdded (Underlying native function: OnServerMarkerAdded 0xa35bfc8)
	void OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCUnconvertEvent (Underlying native function: HandleOnNPCUnconvertEvent 0xa35ab60)
	void HandleOnNPCUnconvertEvent(class AFortPawn*& UnconvertedFortPawn, enum EUnconvertReason& UnconvertReason); // (Final | Native | Public)
};

