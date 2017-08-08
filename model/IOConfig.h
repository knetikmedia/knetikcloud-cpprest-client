/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * IOConfig.h
 *
 * 
 */

#ifndef IOConfig_H_
#define IOConfig_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  IOConfig
    : public ModelBase
{
public:
    IOConfig();
    virtual ~IOConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// IOConfig members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCustomer() const;
    bool customerIsSet() const;
    void unsetCustomer();
    void setCustomer(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    bool getEnabled() const;
    bool enabledIsSet() const;
    void unsetEnabled();
    void setEnabled(bool value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getEnvironment() const;
    bool environmentIsSet() const;
    void unsetEnvironment();
    void setEnvironment(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getProduct() const;
    bool productIsSet() const;
    void unsetProduct();
    void setProduct(utility::string_t value);

protected:
    utility::string_t m_Customer;
    bool m_CustomerIsSet;
    bool m_Enabled;
    bool m_EnabledIsSet;
    utility::string_t m_Environment;
    bool m_EnvironmentIsSet;
    utility::string_t m_Product;
    bool m_ProductIsSet;
};

}
}
}
}

#endif /* IOConfig_H_ */
