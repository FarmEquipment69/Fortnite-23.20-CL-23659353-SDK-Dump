// Class /Script/FortniteGame.FortPhysicsPawn
// Size: 0x480
class AFortPhysicsPawn : public APawn
{
	struct FVehicleSafeTeleportInfo SafeTeleportInfo; // 0x310 (0x30)
	float GravityMultiplier; // 0x340 (0x4)
	unsigned char bUseNetPrediction; // 0x344 (0x1)
	unsigned char padding_345[0x13b]; // 0x345 (0x13b)

	/* Functions */

	// Function /Script/FortniteGame.FortPhysicsPawn.ServerUpdateStateSync (Underlying native function: ServerUpdateStateSync 0x8d2252c)
	void ServerUpdateStateSync(struct TArray<unsigned char>& StateSyncData); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPhysicsPawn.ServerMoveReliable (Underlying native function: ServerMoveReliable 0x8d21f34)
	void ServerMoveReliable(struct FReplicatedPhysicsPawnState& InState); // (0x00000002 | Net | NetReliable | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPhysicsPawn.ServerMove (Underlying native function: ServerMove 0x8d21e90)
	void ServerMove(struct FReplicatedPhysicsPawnState& InState); // (0x00000002 | Net | Native | Event | Public | NetServer)

	// Function /Script/FortniteGame.FortPhysicsPawn.OnRep_SafeTeleportInfo (Underlying native function: OnRep_SafeTeleportInfo 0x8d20a30)
	void OnRepSafeTeleportInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawn.OnRep_GravityMultiplier (Underlying native function: OnRep_GravityMultiplier 0x8d20878)
	void OnRepGravityMultiplier(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortPhysicsPawn.ClientBroadcastHitDetection (Underlying native function: ClientBroadcastHitDetection 0x1b4bbd0)
	void ClientBroadcastHitDetection(class APawn*& ImpulseInstigator, float& Radius, float& Relevancy, struct FVector& HalfPoints, struct FVector& DoublePoints); // (0x00000002 | Net | NetReliable | Native | Event | NetMulticast | Public | HasDefaults)

	// Function /Script/FortniteGame.FortPhysicsPawn.ClientAckGoodMove (Underlying native function: ClientAckGoodMove 0x8d1d96c)
	void ClientAckGoodMove(uint32_t& MoveId); // (0x00000002 | Net | Native | Event | Public | NetClient)
};

