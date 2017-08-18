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
 * CartShippableResponse.h
 *
 * 
 */

#ifndef CartShippableResponse_H_
#define CartShippableResponse_H_


#include "ModelBase.h"


namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  CartShippableResponse
    : public ModelBase
{
public:
    CartShippableResponse();
    virtual ~CartShippableResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// CartShippableResponse members

    /// <summary>
    /// The id of the cart
    /// </summary>
    int32_t getCartId() const;
    bool cartIdIsSet() const;
    void unsetCart_id();
    void setCartId(int32_t value);
    /// <summary>
    /// Whether the item is shippable
    /// </summary>
    bool getShippable() const;
    bool shippableIsSet() const;
    void unsetShippable();
    void setShippable(bool value);

protected:
    int32_t m_Cart_id;
    bool m_Cart_idIsSet;
    bool m_Shippable;
    bool m_ShippableIsSet;
};

}
}
}
}

#endif /* CartShippableResponse_H_ */