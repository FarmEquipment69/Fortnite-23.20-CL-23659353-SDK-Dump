// Class /Script/FortniteGame.FortControllerComponent_SpatialSampler
// Size: 0x158
class UFortControllerComponent_SpatialSampler : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x80]; // 0xa0 (0x80) 
	int NumPendingSamplingLocations; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	bool bIsSampling; // 0x128 (0x1)
	unsigned char padding_129[0x2f]; // 0x129 (0x2f)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerUnregisterOnSamplingLocationChangedHandleID (Underlying native function: ServerUnregisterOnSamplingLocationChangedHandleID 0x5c3ec90)
	void ServerUnregisterOnSamplingLocationChangedHandleID(uint64_t& ID); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerReleaseSamplingLocation (Underlying native function: ServerReleaseSamplingLocation 0x52f5a00)
	void ServerReleaseSamplingLocation(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerRegisterOnSamplingLocationChangedHandleID (Underlying native function: ServerRegisterOnSamplingLocationChangedHandleID 0x5c3eb30)
	void ServerRegisterOnSamplingLocationChangedHandleID(uint64_t& ID); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerEndSpatialSampling (Underlying native function: ServerEndSpatialSampling 0x5c3eb10)
	void ServerEndSpatialSampling(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerBeginSpatialSampling (Underlying native function: ServerBeginSpatialSampling 0x5c3e970)
	void ServerBeginSpatialSampling(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerAddSamplingLocations (Underlying native function: ServerAddSamplingLocations 0x5c3ea30)
	void ServerAddSamplingLocations(struct TArray<struct FVector>& Locations); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ServerAddSamplingLocation (Underlying native function: ServerAddSamplingLocation 0x5c3e990)
	void ServerAddSamplingLocation(struct FVector& Location); // (Final | Net | NetReliable | Native | Event | Private | NetServer | HasDefaults)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.EndSpatialSampling (Underlying native function: EndSpatialSampling 0x5c3e8f0)
	void EndSpatialSampling(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.ClientTeleportedToNextSamplingLocation (Underlying native function: ClientTeleportedToNextSamplingLocation 0x5358280)
	void ClientTeleportedToNextSamplingLocation(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_SpatialSampler.BeginSpatialSampling (Underlying native function: BeginSpatialSampling 0x5c3e8a0)
	bool BeginSpatialSampling(); // (Final | Exec | Native | Public)
};

