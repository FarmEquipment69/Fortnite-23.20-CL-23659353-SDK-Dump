// Class /Script/NetworkPrediction.NetworkPredictionComponent
// Size: 0x290
class UNetworkPredictionComponent : public UActorComponent
{
	struct FNetworkPredictionProxy NetworkPredictionProxy; // 0xa0 (0xb0)
	struct FReplicationProxy ReplicationProxyServerRPC; // 0x150 (0x50)
	struct FReplicationProxy ReplicationProxyAutonomous; // 0x1a0 (0x50)
	struct FReplicationProxy ReplicationProxySimulated; // 0x1f0 (0x50)
	struct FReplicationProxy ReplicationProxyReplay; // 0x240 (0x50)

	/* Functions */

	// Function /Script/NetworkPrediction.NetworkPredictionComponent.ServerReceiveClientInput (Underlying native function: ServerReceiveClientInput 0x70d93e8)
	void ServerReceiveClientInput(struct FServerReplicationRPCParameter& ProxyParameter); // (Net | Native | Event | Protected | NetServer | 0x80000000)
};

