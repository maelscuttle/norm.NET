#include "NNormObjectId.h"

namespace NormNET
{
    NNormObjectId::NNormObjectId() : NObjectWrapper(new NormObjectId())
    {
        
    }

    NNormObjectId::NNormObjectId(UINT16 id) : NObjectWrapper(new NormObjectId(id))
    {
       
    }

    NNormObjectId::NNormObjectId(NNormObjectId^ id) : NObjectWrapper(new NormObjectId(*id->_instance))
    {

    }

    NNormObjectId::operator UINT16()
    {
        return reinterpret_cast<unsigned short>(_instance);
    }

    bool NNormObjectId::operator<(NNormObjectId^ id)
    {
        return _instance < id->_instance;
    }

    bool NNormObjectId::operator>(NNormObjectId^ id)
    {
        return _instance > id->_instance;
    }

    bool NNormObjectId::operator<=(NNormObjectId^ id)
    {
        return _instance <= id->_instance;
    }

    bool NNormObjectId::operator>=(NNormObjectId^ id)
    {
        return _instance >= id->_instance;
    }

    bool NNormObjectId::operator==(NNormObjectId^ id)
    {
        return _instance == id->_instance;
    }

    bool NNormObjectId::operator!=(NNormObjectId^ id)
    {
        return _instance != id->_instance;
    }

    void NNormObjectId::operator-=(UINT16 delta)
    {
        _instance -= delta;
    }

    const char* NNormObjectId::GetValuePtr()
    {
        return _instance->GetValuePtr();
    }

    NNormObjectId^ NNormObjectId::operator++(int)
    {
        _instance++;
        return this;
    }

    NNormObjectId^ NNormObjectId::operator--(int)
    {
        _instance--;
        return this;
    }

}