// Class /Script/FortniteGame.RespawnAndSpectatePlayerComponent
// Size: 0xe0
class URespawnAndSpectatePlayerComponent : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x24]; // 0xa0 (0x24) 
	float RespawnFailSafeTime; // 0xc4 (0x4)
	class AFortAthenaMutator_RespawnAndSpectateSelect* ManagingMutator; // 0xc8 (0x8)
	enum ERespawnAndSpectatePlayerRespawningState RespawningState; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x3]; // 0xd1 (0x3) 
	int ReplicateClientScreenFadeFadeIn; // 0xd4 (0x4)
	unsigned char padding_d8[0x8]; // 0xd8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.RespawnAndSpectatePlayerComponent.ServerFadeOutComplete (Underlying native function: ServerFadeOutComplete 0x6a4bfa4)
	void ServerFadeOutComplete(); // (Net | NetReliable | Native | Event | Protected | NetServer)

	// Function /Script/FortniteGame.RespawnAndSpectatePlayerComponent.OnRep_ReplicateClientScreenFade_FadeIn (Underlying native function: OnRep_ReplicateClientScreenFade_FadeIn 0x845fc98)
	void OnRepReplicateClientScreenFadeFadeIn(); // (Final | Native | Protected)
};

