// Class /Script/FortniteGame.FortControllerComponent_MemorySampler
// Size: 0xf8
class UFortControllerComponent_MemorySampler : public UFortControllerComponent
{
	struct FMulticastInlineDelegate OnProgressUpdated; // 0xa0 (0x10)
	unsigned char unreflected_b0[0x20]; // 0xb0 (0x20) 
	enum EMemorySamplerState MemorySamplerState; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x3]; // 0xd1 (0x3) 
	float MemorySamplerProgress; // 0xd4 (0x4)
	unsigned char padding_d8[0x20]; // 0xd8 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.ServerReleaseSamplingLocation (Underlying native function: ServerReleaseSamplingLocation 0x5c3ebe0)
	void ServerReleaseSamplingLocation(int& MemoryValue); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.ServerEndMemorySampling (Underlying native function: ServerEndMemorySampling 0x52f5a00)
	void ServerEndMemorySampling(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.ServerBeginMemorySampling (Underlying native function: ServerBeginMemorySampling 0x5c3eaf0)
	void ServerBeginMemorySampling(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.ServerAckClientReadyForSampling (Underlying native function: ServerAckClientReadyForSampling 0x5c3e970)
	void ServerAckClientReadyForSampling(); // (Final | Net | NetReliable | Native | Event | Private | NetServer | Const)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.OnRep_MemorySamplerState (Underlying native function: OnRep_MemorySamplerState 0x5c3e950)
	void OnRepMemorySamplerState(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.OnRep_MemorySamplerProgress (Underlying native function: OnRep_MemorySamplerProgress 0x5c3e910)
	void OnRepMemorySamplerProgress(); // (Final | Native | Private | Const)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.EndMemorySampling (Underlying native function: EndMemorySampling 0x5c3e8d0)
	void EndMemorySampling(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.ClientNotifyPreBeginSampling (Underlying native function: ClientNotifyPreBeginSampling 0x5358280)
	void ClientNotifyPreBeginSampling(); // (Final | Net | NetReliable | Native | Event | Private | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_MemorySampler.BeginMemorySampling (Underlying native function: BeginMemorySampling 0x5c3e880)
	void BeginMemorySampling(); // (Final | Exec | Native | Public)
};

