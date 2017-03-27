/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * InvoiceCreateRequest.h
 *
 * 
 */

#ifndef InvoiceCreateRequest_H_
#define InvoiceCreateRequest_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace swagger {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  InvoiceCreateRequest
    : public ModelBase
{
public:
    InvoiceCreateRequest();
    virtual ~InvoiceCreateRequest();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InvoiceCreateRequest members

    /// <summary>
    /// The guid of a cart to create a new invoice for
    /// </summary>
    utility::string_t getCartGuid() const;
    void setCartGuid(utility::string_t value);
    
protected:
    utility::string_t m_Cart_guid;
    };

}
}
}
}

#endif /* InvoiceCreateRequest_H_ */
