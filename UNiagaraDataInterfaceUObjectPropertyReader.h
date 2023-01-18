// Class /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader
// Size: 0x98
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
	struct FNiagaraUserParameterBinding UObjectParameterBinding; // 0x38 (0x18)
	struct TArray<struct FNiagaraUObjectPropertyReaderRemap*> PropertyRemap; // 0x50 (0x10)
	struct TWeakObjectPtr<class AActor> SourceActor; // 0x60 (0x28)
	unsigned char SourceActorComponentClass_88[0x8]; // 0x88 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
	unsigned char padding_90[0x8]; // 0x90 (0x8)

	/* Functions */

	// Function /Script/Niagara.NiagaraDataInterfaceUObjectPropertyReader.SetUObjectReaderPropertyRemap (Underlying native function: SetUObjectReaderPropertyRemap 0x6b78ac4)
	static void SetUObjectReaderPropertyRemap(class UNiagaraComponent*& NiagaraComponent, struct FName& UserParameterName, struct FName& GraphName, struct FName& RemapName); // (Final | Native | Static | Public | BlueprintCallable)
};

