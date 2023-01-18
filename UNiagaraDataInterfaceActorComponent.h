// Class /Script/Niagara.NiagaraDataInterfaceActorComponent
// Size: 0x78
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
	bool bRequireCurrentFrameData; // 0x38 (0x1)
	enum ENDIActorComponentSourceMode SourceMode; // 0x39 (0x1)
	unsigned char unreflected_3a[0x2]; // 0x3a (0x2) 
	int LocalPlayerIndex; // 0x3c (0x4)
	struct TLazyObjectPtr<class AActor> SourceActor; // 0x40 (0x1c)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct FNiagaraUserParameterBinding ActorOrComponentParameter; // 0x60 (0x18)
};

