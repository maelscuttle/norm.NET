#pragma once

namespace NormNET {

    template<class T>
    public ref class NObjectWrapper
    {
        protected:
            T* _instance;
        public:
            NObjectWrapper(T* instance)
                : _instance(instance)
            {
            }
            virtual ~NObjectWrapper()
            {
                if (_instance != nullptr)
                {
                    delete _instance;
                }
            }
            !NObjectWrapper()
            {
                if (_instance != nullptr)
                {
                    delete _instance;
                }
            }
            T* GetInstance()
            {
                return _instance;
            }
    };
}