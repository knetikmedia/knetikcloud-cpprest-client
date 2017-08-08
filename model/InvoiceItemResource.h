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
 * InvoiceItemResource.h
 *
 * 
 */

#ifndef InvoiceItemResource_H_
#define InvoiceItemResource_H_


#include "ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

/// <summary>
/// 
/// </summary>
class  InvoiceItemResource
    : public ModelBase
{
public:
    InvoiceItemResource();
    virtual ~InvoiceItemResource();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// InvoiceItemResource members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getBundleSku() const;
    bool bundleSkuIsSet() const;
    void unsetBundle_sku();
    void setBundleSku(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getCurrentFulfillmentStatus() const;
    bool currentFulfillmentStatusIsSet() const;
    void unsetCurrent_fulfillment_status();
    void setCurrentFulfillmentStatus(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getInvoiceId() const;
    bool invoiceIdIsSet() const;
    void unsetInvoice_id();
    void setInvoiceId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getItemId() const;
    bool itemIdIsSet() const;
    void unsetItem_id();
    void setItemId(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getItemName() const;
    bool itemNameIsSet() const;
    void unsetItem_name();
    void setItemName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getOriginalTotalPrice() const;
    bool originalTotalPriceIsSet() const;
    void unsetOriginal_total_price();
    void setOriginalTotalPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getOriginalUnitPrice() const;
    bool originalUnitPriceIsSet() const;
    void unsetOriginal_unit_price();
    void setOriginalUnitPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    int32_t getQty() const;
    bool qtyIsSet() const;
    void unsetQty();
    void setQty(int32_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSaleName() const;
    bool saleNameIsSet() const;
    void unsetSale_name();
    void setSaleName(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSku() const;
    bool skuIsSet() const;
    void unsetSku();
    void setSku(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getSkuDescription() const;
    bool skuDescriptionIsSet() const;
    void unsetSku_description();
    void setSkuDescription(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getSystemPrice() const;
    bool systemPriceIsSet() const;
    void unsetSystem_price();
    void setSystemPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    double getTotalPrice() const;
    bool totalPriceIsSet() const;
    void unsetTotal_price();
    void setTotalPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    utility::string_t getTypeHint() const;
    bool typeHintIsSet() const;
    void unsetType_hint();
    void setTypeHint(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getUnitPrice() const;
    bool unitPriceIsSet() const;
    void unsetUnit_price();
    void setUnitPrice(double value);

protected:
    utility::string_t m_Bundle_sku;
    bool m_Bundle_skuIsSet;
    utility::string_t m_Current_fulfillment_status;
    bool m_Current_fulfillment_statusIsSet;
    int32_t m_Id;
    bool m_IdIsSet;
    int32_t m_Invoice_id;
    bool m_Invoice_idIsSet;
    int32_t m_Item_id;
    bool m_Item_idIsSet;
    utility::string_t m_Item_name;
    bool m_Item_nameIsSet;
    double m_Original_total_price;
    bool m_Original_total_priceIsSet;
    double m_Original_unit_price;
    bool m_Original_unit_priceIsSet;
    int32_t m_Qty;
    bool m_QtyIsSet;
    utility::string_t m_Sale_name;
    bool m_Sale_nameIsSet;
    utility::string_t m_Sku;
    bool m_SkuIsSet;
    utility::string_t m_Sku_description;
    bool m_Sku_descriptionIsSet;
    double m_System_price;
    bool m_System_priceIsSet;
    double m_Total_price;
    bool m_Total_priceIsSet;
    utility::string_t m_Type_hint;
    bool m_Type_hintIsSet;
    double m_Unit_price;
    bool m_Unit_priceIsSet;
};

}
}
}
}

#endif /* InvoiceItemResource_H_ */
