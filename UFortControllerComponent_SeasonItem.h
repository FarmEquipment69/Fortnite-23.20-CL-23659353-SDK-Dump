// Class /Script/FortniteGame.FortControllerComponent_SeasonItem
// Size: 0x178
class UFortControllerComponent_SeasonItem : public UActorComponent
{
	unsigned char unreflected_178[0x178]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_SeasonItem.ServerSetAthenaSeasonItemMapIconState (Underlying native function: ServerSetAthenaSeasonItemMapIconState 0x8e6026c)
	void ServerSetAthenaSeasonItemMapIconState(struct FGameplayTag& ItemTag, enum EAthenaSeasonMapIconState& IconState); // (Final | Net | NetReliable | Native | Event | Private | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortControllerComponent_SeasonItem.ClientSetAthenaSeasonItemMapIconState (Underlying native function: ClientSetAthenaSeasonItemMapIconState 0x8e5d81c)
	void ClientSetAthenaSeasonItemMapIconState(struct FGameplayTag& ItemTag, enum EAthenaSeasonMapIconState& IconState); // (Final | Net | NetReliable | Native | Event | Private | NetClient)
};

