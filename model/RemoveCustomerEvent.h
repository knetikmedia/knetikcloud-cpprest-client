/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.2.3.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * RemoveCustomerEvent.h
 *
 * 
 */

#ifndef RemoveCustomerEvent_H_
#define RemoveCustomerEvent_H_


#include "CustomerConfig.h"
#include "BroadcastableEvent.h"
#include <cpprest/details/basic_types.h>
#include "Object.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  RemoveCustomerEvent
    : public BroadcastableEvent
{
public:
    RemoveCustomerEvent();
    virtual ~RemoveCustomerEvent();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// RemoveCustomerEvent members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<CustomerConfig> getCustomerConfig() const;
    bool customerConfigIsSet() const;
    void unsetCustomer_config();
    void setCustomerConfig(std::shared_ptr<CustomerConfig> value);

protected:
    std::shared_ptr<CustomerConfig> m_Customer_config;
    bool m_Customer_configIsSet;
};

}
}
}
}

#endif /* RemoveCustomerEvent_H_ */
